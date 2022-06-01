Laboratorio 02 e 03 da matéria de Sistemas embarcados 1.
Laboratório 02
O objetivo principal desta aula foi mostrar o processo de criação de todos os arquivos de partida e o processo de compilação para um sistema Cortex-M. Para tal, também foi realizado, partindo do zero, o desenvolvimento de um firmware para piscar o LED integrado da placa de desenvolvimento STM32F411 Blackpill.

Dessa forma, foram elencadas algumas ferramentas como pré-requisitos e foi criada uma pasta para armazenar os arquivos do projeto, contendo: um arquivo de compilação diferente da arquitetura pertencente à máquina, realizado através do programa GNU Arm Embedded Toolchain.

Em seguida, criou-se outros três arquivos com funções distintas denominados: main.c, startup.c e Makefile. E, para a melhorar à execução e facilitação na compilação realizada, foi criado o arquivo Makefile (que é um arquivo que contém regras para execução de linhas de comando), quando um executavel é carregado na memoria ele não vai de inicio na função main, sendo assim foi criado o arquivo startup.c para poder fazer a inicalização, a preparação, adicionar argumentos, chamar a função main entre outros. Resumidamente: foi implementado parcialmente os vetores de interrupção, a rotina de tratamento do reset com a inicialização de variáveis e o arquivo Makefile onde escrevemos as regras para automatizar o processo de compilação.

Laboratório 03
Dando sequência no lab-02, foi criado um ambiente para realizar o programa cujo a função é de piscar um led. Para realizar o programa foi definido em qual pino do microcontrolador o LED ia ser conectado e o tipo de sinal para ligar/desligar. 

Para acionar o LED foi configurado o pino PC13. Foi realizada à alteração para que a saída para que o LED possa ser acionado, com saída "push-pull", sem capacidade de pull-up ou pull-down. Foi criado um array para o armazenamento de informações referentes à versão do programa, e também, feito o processo de linkagem que fará a parte de combinar os arquivos objetos em um único arquivo executável, e finalmente foi alterado no Makefile para a realização do processo de linkagem automaticamente./

Maiores dificuldades: Alguns problemas de identação, na Instalação e configuração do wsl, instalação do OpenOCD, Configuraçao do Visual Studio Code para executar o wsl, Configuração do ambiente git e conexão com o github. 