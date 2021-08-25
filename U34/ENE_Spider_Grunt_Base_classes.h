// BlueprintGeneratedClass ENE_Spider_Grunt_Base.ENE_Spider_Grunt_Base_C
// Size: 0x4c8 (Inherited: 0x4b4)
struct AENE_Spider_Grunt_Base_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct USphereComponent* Sphere; // 0x4c0(0x08)

	bool GetIsTargetable(); // Function ENE_Spider_Grunt_Base.ENE_Spider_Grunt_Base_C.GetIsTargetable
	void OnRagdoll(); // Function ENE_Spider_Grunt_Base.ENE_Spider_Grunt_Base_C.OnRagdoll
	void ExecuteUbergraph_ENE_Spider_Grunt_Base(int32_t EntryPoint); // Function ENE_Spider_Grunt_Base.ENE_Spider_Grunt_Base_C.ExecuteUbergraph_ENE_Spider_Grunt_Base
};

