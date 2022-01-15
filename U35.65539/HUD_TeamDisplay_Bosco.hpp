#ifndef UE4SS_SDK_HUD_TeamDisplay_Bosco_HPP
#define UE4SS_SDK_HUD_TeamDisplay_Bosco_HPP

class UHUD_TeamDisplay_Bosco_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* StateIconAnim;
    UBorder* Border_0;
    UImage* BorderImage;
    UUI_MaskedImage_C* CharacterIcon;
    UImage* Gradient;
    UHUD_BoscoAbillityCounter_C* HUD_AbillityCharges;
    UTextBlock* PlayerName;
    UHorizontalBox* ReviveBox;
    UImage* StateIcon;
    ABosco* Bosco;
    UHUDVisibilityGroup* VisibilityGroup;
    bool LaserpointerEquipped;
    AActor* BoscoFollowTarget;

    void SetVisibilityIfVisibleMode(ESlateVisibility InVisibility, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void UpdateReviveCharges(int32 CurrentCharges, int32 MaxCharges, UImage* Image, FLinearColor Temp_struct_Variable, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable, FLinearColor K2Node_Select_Default, UImage* CallFunc_CreateImage_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnBoscoChanged(UBosco* Bosco);
    void OnStateChanged(EDroneAIState aCurrentState);
    void Update State Icon(UTexture2D* Texture, FLinearColor InColorAndOpacity);
    void OnReviveused(const int32 ReviveCount);
    void UpdateHUDVisibility();
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature(UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    void FollowTargetChanged(AActor* FollowTarget);
    void ExecuteUbergraph_HUD_TeamDisplay_Bosco(int32 EntryPoint, AController* CallFunc_GetController_ReturnValue, bool Temp_bool_Variable, UBoscoController* K2Node_DynamicCast_AsBosco_Controller, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable, AActor* CallFunc_GetFollowTarget_ReturnValue, ESlateVisibility Temp_byte_Variable_1, EDroneAIState Temp_byte_Variable_2, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* Temp_object_Variable_4, UTexture2D* Temp_object_Variable_5, UTexture2D* Temp_object_Variable_6, UTexture2D* Temp_object_Variable_7, UTexture2D* Temp_object_Variable_8, EDroneAIState Temp_byte_Variable_3, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, FLinearColor Temp_struct_Variable_9, ReviveUsedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, FollowTargetChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_1, UTexture2D* Temp_object_Variable_9, UTexture2D* Temp_object_Variable_10, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UBosco* K2Node_CustomEvent_Bosco, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, EDroneAIState K2Node_CustomEvent_aCurrentState, EDroneAIState CallFunc_GetCurrentState_ReturnValue, FLinearColor K2Node_Select_Default, UTexture2D* K2Node_CustomEvent_Texture, FLinearColor K2Node_CustomEvent_InColorAndOpacity, bool CallFunc_IsValid_ReturnValue_4, ESlateVisibility K2Node_Select_Default_1, StateChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_5, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const int32 K2Node_CustomEvent_ReviveCount, int32 CallFunc_GetReviveCharges_ReturnValue, UBoscoAbillityComponent* CallFunc_GetPlayerAbillity_ReturnValue, int32 CallFunc_GetMaxCharges_ReturnValue, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility Temp_byte_Variable_4, EHUDVisibilityMode CallFunc_GetMode_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, BoscoChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, EDroneAIState CallFunc_GetCurrentState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_BooleanAND_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsGroupVisible_ReturnValue, UHUDVisibilityGroup* K2Node_ComponentBoundEvent_Group, EHUDVisibilityMode K2Node_ComponentBoundEvent_Mode, bool CallFunc_BooleanAND_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_2, AController* CallFunc_GetController_ReturnValue_1, ESlateVisibility K2Node_Select_Default_2, UBoscoController* K2Node_DynamicCast_AsBosco_Controller_1, bool K2Node_DynamicCast_bSuccess_2, AActor* K2Node_CustomEvent_followTarget, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_3, UTexture2D* K2Node_Select_Default_3, UTexture2D* K2Node_Select_Default_4);
}

#endif
