#!/bin/sh

num=0
function scandir() {
    local cur_dir parent_dir workdir logfile infile  inc #must be defined first
    workdir=$1
    
    #echo ${basedir}
    #echo ${filterdir}
    #echo ${filter2dir}
    #echo ${outputdir}
    #echo ${output2dir}
    #echo ${testdir}
    
    cd ${workdir}
    if [ ${workdir} = "/" ]
    then
        cur_dir=""
    else
        cur_dir=$(pwd)
    fi

    for curfile in $(ls ${cur_dir})
    do
        if test -d ${curfile}
        then
            cd ${curfile}
            scandir ${cur_dir}/${curfile} 
            cd ..
        else
            
            infile=${cur_dir}/${curfile}
           
            curtime=$(date "+%H:%M:%S")
            num=$[num+1]
            echo [${curtime}][Phase 1]No.${num} :${infile}

            #touch ${basedir}/"temp1"
            touch ${basedir}/"temp2"

            #sed = ${infile} | sed 'N;s/\n/:/' >> ${outputdir}/"temp1"
            sed -n -e '/^[#]/d' -e '/^};.*/d' -e '/^asmlinkage.*/p' -e '/^void.*/p' -e '/^static.*/p' -e '/^int.*/p' -e '/^[{}]/p' -e 's/^.*__get_user/get_user/p' -e 's/^.*[^_]get_user/get_user/p' -e 's/^.*copy_from_user/copy_from_user/p' ${infile} >> ${basedir}/"temp2"
            
            
            if test -e ${outfile}
            then
                #echo $curtime
                python ${filterdir} ${basedir}/"temp2" ${outputdir}/${num}-${curfile} ${infile}
                
            else
                outfile=${outputdir}/${curfile}
                python ${pydir} ${basedir}/"temp2" ${outfile} ${infile}

            fi
            #rm ${outputdir}/"temp1"
            rm ${basedir}/"temp2"

        fi
    done
}

count = 0
function further() {

    for curfile in $(ls ${outputdir})
    do
        python ${filter2dir} ${outputdir}/${curfile} ${output2dir}/${curfile}
        curtime=$(date "+%H:%M:%S")
        count=$[count+1]
        echo [${curtime}][Phase 2]No.${count} :${outputdir}/${curfile}
    done

}

if test -d $1  #$0: script name, $1 $2 ...  args
then
    basedir=$(pwd)
    filterdir=$(pwd)/'filter.py'
    filter2dir=$(pwd)/'filter2.py'
    outputdir=$(pwd)/'output'
    output2dir=$(pwd)/'output2'
    testdir=$(pwd)/'test'

    #phase 1
    scandir ${testdir} #$1 base dir of project
    #phase 2
    further 

elif test -f $1
then
    echo "you input a file but not a directory,pls reinput and try again"
    exit 1
else
    echo "the Directory isn't exist which you input,pls input a new one!!"
    exit 1
fi

#f ls *.c >/dev/null 2>&1;then，