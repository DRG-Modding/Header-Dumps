// BlueprintGeneratedClass BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_HeavyRain_Crystal_C : ABP_WeatherEffect_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	float Fadeout_OneToZero_A3017D9546A53807B6D05BB6AE0CDCAB; // 0x2b8(0x04)
	char Fadeout__Direction_A3017D9546A53807B6D05BB6AE0CDCAB; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* FadeOut; // 0x2c0(0x08)
	float Fadein_ZeroToOne_292B154C4E05A9ACA12E6F98823124C0; // 0x2c8(0x04)
	char Fadein__Direction_292B154C4E05A9ACA12E6F98823124C0; // 0x2cc(0x01)
	char UnknownData_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* FadeIn; // 0x2d0(0x08)

	void Fadein__FinishedFunc(); // Function BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C.Fadein__FinishedFunc
	void Fadein__UpdateFunc(); // Function BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C.Fadein__UpdateFunc
	void Fadeout__FinishedFunc(); // Function BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C.Fadeout__FinishedFunc
	void Fadeout__UpdateFunc(); // Function BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C.Fadeout__UpdateFunc
	void StartEffect(); // Function BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C.StartEffect
	void EndEffect(); // Function BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C.EndEffect
	void ExecuteUbergraph_BP_New_HeavyRain_Crystal(int32_t EntryPoint); // Function BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C.ExecuteUbergraph_BP_New_HeavyRain_Crystal
};

