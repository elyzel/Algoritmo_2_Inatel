## Algoritmo_C_Inatel
Todos os projetos desenvolvidos na graduação elaborados na linguagem C++.

Conceitos aprendidos:

- Pesquisa 
- Ordenação
- Ponteiro
- Lista Ligada
- Hashing

##  Requisitos para rodar o C++ no VSCode

#  1)  Baixar e Instalar o MSYS2
Acesse o site oficial do MSYS2 ( https://www.msys2.org/ ) e baixe o instalador (um arquivo .exe).

Execute o instalador. Pode ir clicando em Next e deixar tudo no padrão (ele criará uma pasta em C:\msys64).

Ao final da instalação, certifique-se de que a opção "Run MSYS2 now" está marcada e clique em Finish.



#  2) Baixar os pacotes do Compilador (GCC)
Uma janela de terminal preta (o terminal do MSYS2) vai abrir automaticamente.

Copie o comando abaixo, cole nesse terminal e aperte Enter:
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain

O terminal vai pedir para você selecionar os pacotes (Enter a selection (default=all)). Apenas aperte Enter para aceitar todos.

Ele perguntará se você quer continuar com a instalação (Proceed with installation? [Y/n]). Digite Y e aperte Enter.

Aguarde o download e a instalação terminarem (pode levar alguns minutos). Depois, pode fechar esse terminal.



#  3) Configurar as Variáveis de Ambiente no Windows 11
Este é o passo decisivo para o VS Code conseguir "enxergar" o seu compilador:

Pressione a tecla Windows no seu teclado e digite: variáveis de ambiente.

Clique no resultado Editar as variáveis de ambiente do sistema (terá um ícone de Painel de Controle).

Na janela que se abriu, clique no botão Variáveis de Ambiente... (fica bem na parte de baixo).

Olhe para a lista de baixo, chamada Variáveis do sistema. Role a lista até encontrar a variável Path. Clique nela para selecionar e depois clique no botão Editar....

Clique no botão Novo (no lado direito).

Digite ou cole exatamente este caminho (considerando que você fez a instalação padrão):
C:\msys64\ucrt64\bin

Clique em OK nessa janela, OK na anterior e OK na primeira para fechar tudo e salvar.

#  4) Testar a Instalação
Vamos confirmar se o Windows 11 reconheceu tudo corretamente:

Feche o VS Code se ele estiver aberto (isso é obrigatório para ele atualizar as informações do sistema).

Abra o Prompt de Comando (aperte a tecla Windows, digite cmd e dê Enter).

Digite o seguinte comando e aperte Enter:
g++ --version

Se a tela retornar várias linhas de texto com informações e a versão do compilador (algo como g++ (RevX, Built by MSYS2 project)...), a sua configuração foi um sucesso absoluto! Agora é só abrir o VS Code, escrever seu código main.cpp e clicar no botão de "Play" no canto superior direito para executar.
