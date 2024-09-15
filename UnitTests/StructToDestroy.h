struct StructToDestroy {
	bool* destroyed_flag;

	StructToDestroy(bool* flag) : destroyed_flag(flag) {}

	~StructToDestroy() { *destroyed_flag = true; }
};