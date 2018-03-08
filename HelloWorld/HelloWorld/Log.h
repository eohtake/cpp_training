#pragma once

static void Log(const char* message)
{
	std::cout << message << std::endl;
}

/* 
Ao utilizar um header file, tomar cuidado para declarar as funcoes como static ou inline.

Se nao fizer isso, e mais de um arquivo tiver o mesmo include, o cpp entende que estamos
repetindo a declaracao da funcao e vai dar linker erro.

Static vai declarar em cada arquivo cpp que aquela funcao do header so vale para aquele arquivo cpp.

Inline indica ao cpp que ele deve usar apenas o corpo da funcao no arquivo cpp, evitando uma nova declaracao.

inline void Log(const char* message)
{
   std::cout << message << std::endl;
}

*/

