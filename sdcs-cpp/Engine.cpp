#include "Engine.h"
#include <string>
#include <map>
#include "Component.h"
#include <iostream>

Component* Engine::gt_cmp(int id) noexcept
{
	return this->cmps[id];
}

void Engine::pt_cmp(int id, Component* cmp) noexcept
{
	this->cmps[id] = cmp;
	std::cout << "INSERT\t" << id << std::endl;
}

void Engine::rm_cmp(int id)
{
	
	this->cmps.erase(id);
}
std::string Engine::refresh()
{
	std::map<int, Component*>::iterator iter;
	iter = this->cmps.begin();

	while (iter != cmps.end())
	{
		iter->second;
		std::cout << "ID:" << iter->first << std::endl
			<< "ComponentName:" << iter->second;
		iter++;
	}
	return std::string("Hello");
}