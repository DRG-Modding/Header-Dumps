// WidgetBlueprintGeneratedClass ITM_SeasonChallengeIcon.ITM_SeasonChallengeIcon_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_SeasonChallengeIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Glow; // 0x238(0x08)
	UImage* Icon_Glow; // 0x240(0x08)
	UImage* Image_Challenge; // 0x248(0x08)

	void SetIconHovered(bool InHovered, UTexture2D* Icon, FLinearColor Color);
	void ExecuteUbergraph_ITM_SeasonChallengeIcon(int32_t EntryPoint);
};

