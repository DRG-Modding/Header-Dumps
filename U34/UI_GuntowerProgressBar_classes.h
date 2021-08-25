// WidgetBlueprintGeneratedClass UI_GuntowerProgressBar.UI_GuntowerProgressBar_C
// Size: 0x2b8 (Inherited: 0x230)
struct UUI_GuntowerProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Activated; // 0x238(0x08)
	struct UWidgetAnimation* StartUp; // 0x240(0x08)
	struct UTextBlock* AnalysingText; // 0x248(0x08)
	struct UImage* BaseElementBG; // 0x250(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x258(0x08)
	struct UTextBlock* FinishedText; // 0x260(0x08)
	struct UImage* Image_3; // 0x268(0x08)
	struct UImage* Image_4; // 0x270(0x08)
	struct UVerticalBox* ModulesDisplayRight; // 0x278(0x08)
	struct UTextBlock* TextBlock_2; // 0x280(0x08)
	struct UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_1; // 0x288(0x08)
	struct UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_2; // 0x290(0x08)
	struct UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_3; // 0x298(0x08)
	struct AGuntowerActivationPlatform* ActivationPlatform; // 0x2a0(0x08)
	struct FTimerHandle VisibleTimer; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* NewVar_1; // 0x2b0(0x08)

	void Construct(); // Function UI_GuntowerProgressBar.UI_GuntowerProgressBar_C.Construct
	void SetStarterPlatform(struct AGuntowerActivationPlatform* Starterplatform); // Function UI_GuntowerProgressBar.UI_GuntowerProgressBar_C.SetStarterPlatform
	void OnProgress(float Progress); // Function UI_GuntowerProgressBar.UI_GuntowerProgressBar_C.OnProgress
	void PlayerCountChanged(int32_t playerCount); // Function UI_GuntowerProgressBar.UI_GuntowerProgressBar_C.PlayerCountChanged
	void OnFinished(); // Function UI_GuntowerProgressBar.UI_GuntowerProgressBar_C.OnFinished
	void ExecuteUbergraph_UI_GuntowerProgressBar(int32_t EntryPoint); // Function UI_GuntowerProgressBar.UI_GuntowerProgressBar_C.ExecuteUbergraph_UI_GuntowerProgressBar
};

