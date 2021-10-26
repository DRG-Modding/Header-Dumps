// WidgetBlueprintGeneratedClass GatlingGun_Overheat.GatlingGun_Overheat_C
// Size: 0x265 (Inherited: 0x230)
struct UGatlingGun_Overheat_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BG; // 0x238(0x08)
	UImage* CircularProgressBar; // 0x240(0x08)
	UTextBlock* TextBlock_HeatValue; // 0x248(0x08)
	UTextBlock* TextBlock_Status; // 0x250(0x08)
	UMaterialInstanceDynamic* DynamicMat; // 0x258(0x08)
	float HeatPercentage; // 0x260(0x04)
	bool Overheated; // 0x264(0x01)

	void SetHeatValue(float HeatPercentage, bool Overheated);
	void Construct();
	void SetProgress(float Percent);
	void ExecuteUbergraph_GatlingGun_Overheat(int32_t EntryPoint);
};

