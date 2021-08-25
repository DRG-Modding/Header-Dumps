// BlueprintGeneratedClass BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_HeavyRain_Lush_C : ABP_WeatherEffect_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	float Fadeout_OneToZero_6AF7D3FF4ECB419F4995D9B03104B55F; // 0x2b8(0x04)
	char Fadeout__Direction_6AF7D3FF4ECB419F4995D9B03104B55F; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* FadeOut; // 0x2c0(0x08)
	float Fadein_ZeroToOne_FE890FCF46CAF26A7BBFED9BDF736F8A; // 0x2c8(0x04)
	char Fadein__Direction_FE890FCF46CAF26A7BBFED9BDF736F8A; // 0x2cc(0x01)
	char UnknownData_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* FadeIn; // 0x2d0(0x08)

	void Fadein__FinishedFunc(); // Function BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C.Fadein__FinishedFunc
	void Fadein__UpdateFunc(); // Function BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C.Fadein__UpdateFunc
	void Fadeout__FinishedFunc(); // Function BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C.Fadeout__FinishedFunc
	void Fadeout__UpdateFunc(); // Function BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C.Fadeout__UpdateFunc
	void StartEffect(); // Function BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C.StartEffect
	void EndEffect(); // Function BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C.EndEffect
	void ExecuteUbergraph_BP_New_HeavyRain_Lush(int32_t EntryPoint); // Function BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C.ExecuteUbergraph_BP_New_HeavyRain_Lush
};

