// WidgetBlueprintGeneratedClass CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C
// Size: 0x278 (Inherited: 0x230)
struct UCharSelect_HeroSelect_Dots_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Dot0; // 0x238(0x08)
	struct UImage* Dot1; // 0x240(0x08)
	struct UImage* Dot2; // 0x248(0x08)
	struct UImage* Dot3; // 0x250(0x08)
	struct UHorizontalBox* PlayerDotBox; // 0x258(0x08)
	struct APlayerCharacter* CharacterClass; // 0x260(0x08)
	struct TArray<struct UImage*> PlayerDots; // 0x268(0x10)

	void UpdateDots(); // Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.UpdateDots
	void PreConstruct(bool IsDesignTime); // Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Tick
	void Set Character Class(struct APlayerCharacter* CharacterClass); // Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Set Character Class
	void Construct(); // Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Construct
	void ExecuteUbergraph_CharSelect_HeroSelect_Dots(int32_t EntryPoint); // Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.ExecuteUbergraph_CharSelect_HeroSelect_Dots
};

