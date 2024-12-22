# Problemas Resolvidos - Clube de Programação (CDB)

Bem-vindo ao repositório onde registro minha jornada de resolução de problemas de programação no **Clube de Programação (CDB)** da **UTFPR**. Aqui você encontrará soluções organizadas por **contests**, com cada pasta representando um evento de programação contendo os problemas que resolvi.

**Acesse o site oficial do Clube de Programação:** [cdp.dainf.ct.utfpr.edu.br](http://cdp.dainf.ct.utfpr.edu.br/)

## Estrutura do Repositório

A estrutura do repositório segue o formato:

```
Contest/
├── CDB/
│   ├── Contest_YYYY_MM_DD/
│   │   ├── Iniciante/
│   │   │   ├── A/
│   │   │   │   ├── A.cpp
│   │   │   │   ├── Makefile
│   │   │   │   └── README.md # Enunciado do problema
│   │   │   ├── B/
│   │   │   └── ...
│   │   ├── Intermediario/
│   │   ├── Avancado/
│   │   └── ...
│   └── ...
└── OutrasContest/
```

- **Contest/**: Diretório principal contendo todos os contests.
- **CDB/**: Diretório do Clube de Programação UTFPR, contendo seus contests organizados por data.
- **OutrasContest/**: Diretório para contests fora do CDB, ainda sem estrutura definida.
- **Contest_YYYY_MM_DD/**: Diretório específico para cada contest, nomeado pela data (ano, mês, dia).
- **Iniciante**, **Intermediario**, **Avancado**: Subdiretórios que organizam os problemas de acordo com o nível do contest.
- **Problema_X/**: Diretório para cada problema resolvido no contest, contendo:
  - Código-fonte (em linguagens como C++ ou Python).
  - Arquivo `Makefile` para compilar e executar os testes.
  - Arquivo `README.md` com o enunciado do problema.

## Exemplo de Contest

```
Contest/
├── CDB/
│   ├── Contest_YYYY_MM_DD/
│   │   ├── Iniciante/
│   │   │   ├── A/
│   │   │   │   ├── main.cpp
│   │   │   │   ├── Makefile
│   │   │   │   └── README.md # Enunciado do problema
│   │   │   ├── B/
│   │   │   └── ...
│   │   ├── Intermediario/
│   │   ├── Avancado/
│   │   └── ...
│   └── ...
└── OutrasContest/
    ├── Pasta/
    ├── ...
```

## Motivação

Este repositório foi criado para:
- Praticar habilidades de resolução de problemas de programação.
- Demonstrar proficiência em algoritmos e estrutura de dados.
- Organizar meu progresso em contests e competições.
- Facilitar o compartilhamento de soluções com a comunidade.

## Tecnologias Utilizadas

- **C++**: Para soluções otimizadas e de alta performance.
- **Python**: Para resolução rápida de problemas.
- **Makefile**: Para automatizar a compilação e execução de soluções.
- **Git**: Controle de versão para gerenciar o repositório.

## Como Navegar pelo Repositório

1. Acesse a pasta do contest desejado em `Contest/CDB/Contest_YYYY_MM_DD` ou `Contest/OutrasContest/Contest_YYYY_MM_DD`.
2. Dentro da pasta do contest, explore os diretórios correspondentes ao nível (**Iniciante**, **Intermediario**, **Avancado**).
3. Cada problema contém um arquivo `README.md` com o enunciado do problema.

## Como Executar as Soluções

### C++

Utilizando o Makefile presente no diretório do problema:
Você ira executar o comando **make create** para criar as pastas de entrada e saída do problema.Preencher a pasta de entrada com a entrada do problema e executar o comando **make run** para

```bash
cd Contest/CDB/Contest_YYYY_MM_DD/Nivel/Problema_X
make create
make run
```

### Python

```bash
cd Contest/CDB/Contest_YYYY_MM_DD/Nivel/Problema_X
python3 main.py
```

## Meu Compromisso

Estou continuamente participando de contests e adicionando novos problemas resolvidos. Este repositório reflete meu esforço e dedicação em crescer como programador e solucionador de problemas.

## Contato

Fique à vontade para me contatar ou revisar minhas soluções:
- **Email**: [fabreu.1997@alunos.utfpr.edu.br](mailto:fabreu.1997@alunos.utfpr.edu.br)
- **LinkedIn**: [linkedin.com/in/fernando-abreu-b530381b7](https://www.linkedin.com/in/fernando-abreu-b530381b7/)

Agradeço por visitar meu repositório e espero que ele demonstre minha paixão por programação e aprendizado constante.