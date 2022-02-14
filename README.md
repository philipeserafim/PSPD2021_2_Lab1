# PSPD2021_2_Lab1

## Um cliente e um worker

A versão de um cliente e um servidor encontra-se na pasta ```v1```.
Para executá-lo é necessário executar os comandos:

```make```
Para gerar os executáveis necessários


Para iniciar o lado worker:
```./lab_server```
Para confirmar, pode-se conferir a execução dos programas atavés do ```rpcinfo -p```, onde deve-se obter algo do seguinte formado:
```
   program vers proto   port  service
    100000    4   tcp    111  portmapper
    100000    3   tcp    111  portmapper
    100000    2   tcp    111  portmapper
    100000    4   udp    111  portmapper
    100000    3   udp    111  portmapper
    100000    2   udp    111  portmapper
      5050   50   udp  35664
      5050   50   tcp  40311
```

E, em outro terminal, para iniciar o lado cliente, onde o <ip> deve ser substituído pelo ip no qual encontra-se o server, caso esteja executando localmente, deve-se utilizar o ```127.0.0.1```.
```./lab_client <ip>```

Com isso, será possível obter o seguinte resultado;
```
Menor número do vetor: 0.000000
Maior número do vetor: 5.000000
```
