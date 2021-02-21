# Sistemas Operativos 1 20-21

A minha recomendação é usarem WSL (versão 2 de preferência) ao invés duma VM. Para tudo ficar a funcionar bem têm que meter o WSL a montar os discos a usar o prótocolo metadata (podem usar este exemplo [aqui](https://docs.microsoft.com/en-us/windows/wsl/wsl-config#configure-per-distro-launch-settings-with-wslconf) ou ver o ficheiro que eu pessoalmente uso [aqui](https://github.com/TheForgottened/TheForgottened/blob/main/WSL_ConfigScript/wsl.conf)) se não vão ter problemas com pipes. Isso e façam um favor a vocês e usem o [Windows Terminal](https://www.microsoft.com/en-us/p/windows-terminal/9n0dx20hk701?activetab=pivot:overviewtab) ao invés da consola habitual. Para IDE recomendo o [VS Code](https://code.visualstudio.com/download) (a integração com WSL é excelente).

`gcc <nome do ficheiro.c> -o <nome do executável.exe>`

O meu trabalho prático foi feito em grupo com o [@JOSEALM3IDA](https://github.com/JOSEALM3IDA) e pode ser encontrado [aqui](https://github.com/JOSEALM3IDA/Material-ISEC/tree/main/SO-2020/Trabalho).

Nota final: 15