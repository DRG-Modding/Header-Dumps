// WidgetBlueprintGeneratedClass CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C
// Size: 0x278 (Inherited: 0x230)
struct UCharSelect_HeroSelect_Dots_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Dot0; // 0x238(0x08)
	UImage* Dot1; // 0x240(0x08)
	UImage* Dot2; // 0x248(0x08)
	UImage* Dot3; // 0x250(0x08)
	UHorizontalBox* PlayerDotBox; // 0x258(0x08)
	APlayerCharacter* CharacterClass; // 0x260(0x08)
	TArray<UImage*> PlayerDots; // 0x268(0x10)

	void UpdateDots();
	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Set Character Class(APlayerCharacter* CharacterClass);
	void Construct();
	void ExecuteUbergraph_CharSelect_HeroSelect_Dots(int32_t EntryPoint);
};

