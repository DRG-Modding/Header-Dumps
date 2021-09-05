// WidgetBlueprintGeneratedClass UI_GuntowerProgressBar.UI_GuntowerProgressBar_C
// Size: 0x2b8 (Inherited: 0x230)
struct UUI_GuntowerProgressBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Activated; // 0x238(0x08)
	UWidgetAnimation* StartUp; // 0x240(0x08)
	UTextBlock* AnalysingText; // 0x248(0x08)
	UImage* BaseElementBG; // 0x250(0x08)
	UCanvasPanel* CanvasPanel_1; // 0x258(0x08)
	UTextBlock* FinishedText; // 0x260(0x08)
	UImage* Image_3; // 0x268(0x08)
	UImage* Image_4; // 0x270(0x08)
	UVerticalBox* ModulesDisplayRight; // 0x278(0x08)
	UTextBlock* TextBlock_2; // 0x280(0x08)
	UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_1; // 0x288(0x08)
	UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_2; // 0x290(0x08)
	UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_3; // 0x298(0x08)
	AGuntowerActivationPlatform* ActivationPlatform; // 0x2a0(0x08)
	FTimerHandle VisibleTimer; // 0x2a8(0x08)
	UMaterialInstanceDynamic* NewVar_1; // 0x2b0(0x08)

	void Construct();
	void SetStarterPlatform(AGuntowerActivationPlatform* Starterplatform);
	void OnProgress(float Progress);
	void PlayerCountChanged(int32_t playerCount);
	void OnFinished();
	void ExecuteUbergraph_UI_GuntowerProgressBar(int32_t EntryPoint);
};

