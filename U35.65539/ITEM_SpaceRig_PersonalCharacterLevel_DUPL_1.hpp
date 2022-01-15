#ifndef UE4SS_SDK_ITEM_SpaceRig_PersonalCharacterLevel_DUPL_1_HPP
#define UE4SS_SDK_ITEM_SpaceRig_PersonalCharacterLevel_DUPL_1_HPP

class UITEM_SpaceRig_PersonalCharacterLevel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* ClassName;
    UBorder* ClassName_InnerBorder;
    UBorder* ClassName_OuterBorder;
    UProgressBar* ExtensionBar;
    UImage* ExtensionBG;
    UImage* ExtensionFiller;
    UImage* InnerBorder;
    UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel;
    UImage* OuterBorder;
    UImage* ServerIcon;
    UUI_MaskedImage_C* UI_MaskedImage;
    FLinearColor Tint_Edge;
    FLinearColor Tint_Class;
    AFSDPlayerState* PlayerState;
    APlayerCharacter* SelectedCharacter;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Update(UPlayerCharacter* Character);
    void OnPlayerCharacterSpawned(UPlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UTexture2D* CallFunc_GetHeroIcon_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor_2, UPlayerCharacter* K2Node_CustomEvent_character, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, const FText CallFunc_GetHeroName_ReturnValue, FCharacterProgress CallFunc_GetSelectCharacterProgress_ReturnValue, int32 CallFunc_GetSelectedCharacterLevel_ReturnValue);
}

#endif
