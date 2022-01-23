#ifndef UE4SS_SDK_ITEM_SpaceRig_PersonalCharacterLevel_DUPL_1_HPP
#define UE4SS_SDK_ITEM_SpaceRig_PersonalCharacterLevel_DUPL_1_HPP

class UITEM_SpaceRig_PersonalCharacterLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ClassName;
    class UBorder* ClassName_InnerBorder;
    class UBorder* ClassName_OuterBorder;
    class UProgressBar* ExtensionBar;
    class UImage* ExtensionBG;
    class UImage* ExtensionFiller;
    class UImage* InnerBorder;
    class UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel;
    class UImage* OuterBorder;
    class UImage* ServerIcon;
    class UUI_MaskedImage_C* UI_MaskedImage;
    FLinearColor Tint_Edge;
    FLinearColor Tint_Class;
    class AFSDPlayerState* PlayerState;
    class APlayerCharacter* SelectedCharacter;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Update(class APlayerCharacter* Character);
    void OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, FExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UTexture2D* CallFunc_GetHeroIcon_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor_2, class APlayerCharacter* K2Node_CustomEvent_character, class AFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, const FText CallFunc_GetHeroName_ReturnValue, FCharacterProgress CallFunc_GetSelectCharacterProgress_ReturnValue, int32 CallFunc_GetSelectedCharacterLevel_ReturnValue);
};

#endif
