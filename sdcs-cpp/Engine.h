#pragma once
#include <string>
#include <map>
#include "Component.h"

class Engine
{
public:
	Component* gt_cmp(int id) noexcept;
	void pt_cmp(int id, Component* cmp) noexcept;
	void rm_cmp(int id);
	std::string refresh();

private:
	std::string engine_id;
	std::map<int, Component*> cmps;

};

