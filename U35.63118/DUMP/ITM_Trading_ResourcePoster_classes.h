// WidgetBlueprintGeneratedClass ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C
// Size: 0x288 (Inherited: 0x230)
struct UITM_Trading_ResourcePoster_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Pan1; // 0x238(0x08)
	UImage* I_IconsMaterial; // 0x240(0x08)
	UImage* I_PosterImage; // 0x248(0x08)
	UImage* Image_Resource; // 0x250(0x08)
	UImage* Image_Resource_2; // 0x258(0x08)
	UImage* Image_Resource_3; // 0x260(0x08)
	UImage* Image_Resource_4; // 0x268(0x08)
	UImage* Image_Resource_5; // 0x270(0x08)
	UImage* IMG_Background; // 0x278(0x08)
	UImage* IMG_GradientOverlay; // 0x280(0x08)

	void Construct();
	void SetData(UTexture2D* Icon);
	void ExecuteUbergraph_ITM_Trading_ResourcePoster(int32_t EntryPoint);
};

