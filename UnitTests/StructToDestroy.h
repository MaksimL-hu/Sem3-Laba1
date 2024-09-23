#ifndef STRUCT_TO_DESTROY_H
#define STRUCT_TO_DESTROY_H

struct StructToDestroy {
	bool* destroyed_flag;

	StructToDestroy(bool* flag) : destroyed_flag(flag) {}

	~StructToDestroy() { *destroyed_flag = true; }
};

#endif