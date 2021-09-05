// BlueprintGeneratedClass BP_NewSandstorm.BP_NewSandStorm_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_NewSandStorm_C : ABP_WeatherEffect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	float Fadeout_OneToZero_1C9D7E9C43D38F352386738892203941; // 0x2b8(0x04)
	enum class ETimelineDirection Fadeout__Direction_1C9D7E9C43D38F352386738892203941; // 0x2bc(0x01)
	UTimelineComponent* FadeOut; // 0x2c0(0x08)
	float Fadin_ZeroToOne_D260EBF6476C34297BC10A928022C9AF; // 0x2c8(0x04)
	enum class ETimelineDirection Fadin__Direction_D260EBF6476C34297BC10A928022C9AF; // 0x2cc(0x01)
	UTimelineComponent* Fadin; // 0x2d0(0x08)

	void Fadin__FinishedFunc();
	void Fadin__UpdateFunc();
	void Fadeout__FinishedFunc();
	void Fadeout__UpdateFunc();
	void StartEffect();
	void EndEffect();
	void ExecuteUbergraph_BP_NewSandStorm(int32_t EntryPoint);
};

