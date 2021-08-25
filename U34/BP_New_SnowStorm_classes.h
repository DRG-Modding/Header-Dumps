// BlueprintGeneratedClass BP_New_SnowStorm.BP_New_SnowStorm_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_SnowStorm_C : ABP_WeatherEffect_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	float Fadeout_OneToZero_321EE05E466F9B8147EEF89FEA0B8335; // 0x2b8(0x04)
	char Fadeout__Direction_321EE05E466F9B8147EEF89FEA0B8335; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* FadeOut; // 0x2c0(0x08)
	float Fadein_ZeroToOne_A0FCF2DB48CDF89D5DB4DC99F95711E6; // 0x2c8(0x04)
	char Fadein__Direction_A0FCF2DB48CDF89D5DB4DC99F95711E6; // 0x2cc(0x01)
	char UnknownData_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* FadeIn; // 0x2d0(0x08)

	void Fadein__FinishedFunc(); // Function BP_New_SnowStorm.BP_New_SnowStorm_C.Fadein__FinishedFunc
	void Fadein__UpdateFunc(); // Function BP_New_SnowStorm.BP_New_SnowStorm_C.Fadein__UpdateFunc
	void Fadeout__FinishedFunc(); // Function BP_New_SnowStorm.BP_New_SnowStorm_C.Fadeout__FinishedFunc
	void Fadeout__UpdateFunc(); // Function BP_New_SnowStorm.BP_New_SnowStorm_C.Fadeout__UpdateFunc
	void StartEffect(); // Function BP_New_SnowStorm.BP_New_SnowStorm_C.StartEffect
	void EndEffect(); // Function BP_New_SnowStorm.BP_New_SnowStorm_C.EndEffect
	void ExecuteUbergraph_BP_New_SnowStorm(int32_t EntryPoint); // Function BP_New_SnowStorm.BP_New_SnowStorm_C.ExecuteUbergraph_BP_New_SnowStorm
};

