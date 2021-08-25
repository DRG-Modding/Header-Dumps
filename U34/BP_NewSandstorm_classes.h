// BlueprintGeneratedClass BP_NewSandstorm.BP_NewSandStorm_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_NewSandStorm_C : ABP_WeatherEffect_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	float Fadeout_OneToZero_1C9D7E9C43D38F352386738892203941; // 0x2b8(0x04)
	char Fadeout__Direction_1C9D7E9C43D38F352386738892203941; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* FadeOut; // 0x2c0(0x08)
	float Fadin_ZeroToOne_D260EBF6476C34297BC10A928022C9AF; // 0x2c8(0x04)
	char Fadin__Direction_D260EBF6476C34297BC10A928022C9AF; // 0x2cc(0x01)
	char UnknownData_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* Fadin; // 0x2d0(0x08)

	void Fadin__FinishedFunc(); // Function BP_NewSandstorm.BP_NewSandStorm_C.Fadin__FinishedFunc
	void Fadin__UpdateFunc(); // Function BP_NewSandstorm.BP_NewSandStorm_C.Fadin__UpdateFunc
	void Fadeout__FinishedFunc(); // Function BP_NewSandstorm.BP_NewSandStorm_C.Fadeout__FinishedFunc
	void Fadeout__UpdateFunc(); // Function BP_NewSandstorm.BP_NewSandStorm_C.Fadeout__UpdateFunc
	void StartEffect(); // Function BP_NewSandstorm.BP_NewSandStorm_C.StartEffect
	void EndEffect(); // Function BP_NewSandstorm.BP_NewSandStorm_C.EndEffect
	void ExecuteUbergraph_BP_NewSandStorm(int32_t EntryPoint); // Function BP_NewSandstorm.BP_NewSandStorm_C.ExecuteUbergraph_BP_NewSandStorm
};

