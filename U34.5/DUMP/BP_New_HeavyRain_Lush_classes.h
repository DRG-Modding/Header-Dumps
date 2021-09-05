// BlueprintGeneratedClass BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_HeavyRain_Lush_C : ABP_WeatherEffect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	float Fadeout_OneToZero_6AF7D3FF4ECB419F4995D9B03104B55F; // 0x2b8(0x04)
	enum class ETimelineDirection Fadeout__Direction_6AF7D3FF4ECB419F4995D9B03104B55F; // 0x2bc(0x01)
	UTimelineComponent* FadeOut; // 0x2c0(0x08)
	float Fadein_ZeroToOne_FE890FCF46CAF26A7BBFED9BDF736F8A; // 0x2c8(0x04)
	enum class ETimelineDirection Fadein__Direction_FE890FCF46CAF26A7BBFED9BDF736F8A; // 0x2cc(0x01)
	UTimelineComponent* FadeIn; // 0x2d0(0x08)

	void Fadein__FinishedFunc();
	void Fadein__UpdateFunc();
	void Fadeout__FinishedFunc();
	void Fadeout__UpdateFunc();
	void StartEffect();
	void EndEffect();
	void ExecuteUbergraph_BP_New_HeavyRain_Lush(int32_t EntryPoint);
};

