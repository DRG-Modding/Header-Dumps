#ifndef UE4SS_SDK_HUD_TeamDisplay_Bosco_HPP
#define UE4SS_SDK_HUD_TeamDisplay_Bosco_HPP

class UHUD_TeamDisplay_Bosco_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StateIconAnim;
    class UBorder* Border_0;
    class UImage* BorderImage;
    class UUI_MaskedImage_C* CharacterIcon;
    class UImage* Gradient;
    class UHUD_BoscoAbillityCounter_C* HUD_AbillityCharges;
    class UTextBlock* PlayerName;
    class UHorizontalBox* ReviveBox;
    class UImage* StateIcon;
    class ABosco* Bosco;
    class UHUDVisibilityGroup* VisibilityGroup;
    bool LaserpointerEquipped;
    class AActor* BoscoFollowTarget;

    void SetVisibilityIfVisibleMode(ESlateVisibility InVisibility, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void UpdateReviveCharges(int32 CurrentCharges, int32 MaxCharges, class UImage* Image, FLinearColor Temp_struct_Variable, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable, FLinearColor K2Node_Select_Default, class UImage* CallFunc_CreateImage_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnBoscoChanged(class ABosco* Bosco);
    void OnStateChanged(EDroneAIState aCurrentState);
    void Update State Icon(class UTexture2D* Texture, FLinearColor InColorAndOpacity);
    void OnReviveused(const int32 ReviveCount);
    void UpdateHUDVisibility();
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    void FollowTargetChanged(class AActor* FollowTarget);
    void ExecuteUbergraph_HUD_TeamDisplay_Bosco(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, bool Temp_bool_Variable, class ABoscoController* K2Node_DynamicCast_AsBosco_Controller, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable, class AActor* CallFunc_GetFollowTarget_ReturnValue, ESlateVisibility Temp_byte_Variable_1, EDroneAIState Temp_byte_Variable_2, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, EDroneAIState Temp_byte_Variable_3, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, FLinearColor Temp_struct_Variable_9, FExecuteUbergraph_HUD_TeamDisplay_BoscoK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_HUD_TeamDisplay_BoscoK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_TeamDisplay_BoscoK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, FExecuteUbergraph_HUD_TeamDisplay_BoscoK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class ABosco* K2Node_CustomEvent_Bosco, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, EDroneAIState K2Node_CustomEvent_aCurrentState, EDroneAIState CallFunc_GetCurrentState_ReturnValue, FLinearColor K2Node_Select_Default, class UTexture2D* K2Node_CustomEvent_Texture, FLinearColor K2Node_CustomEvent_InColorAndOpacity, bool CallFunc_IsValid_ReturnValue_4, ESlateVisibility K2Node_Select_Default_1, FExecuteUbergraph_HUD_TeamDisplay_BoscoK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const int32 K2Node_CustomEvent_ReviveCount, int32 CallFunc_GetReviveCharges_ReturnValue, class UBoscoAbillityComponent* CallFunc_GetPlayerAbillity_ReturnValue, int32 CallFunc_GetMaxCharges_ReturnValue, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility Temp_byte_Variable_4, EHUDVisibilityMode CallFunc_GetMode_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FExecuteUbergraph_HUD_TeamDisplay_BoscoK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, EDroneAIState CallFunc_GetCurrentState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsGroupVisible_ReturnValue, class UHUDVisibilityGroup* K2Node_ComponentBoundEvent_Group, EHUDVisibilityMode K2Node_ComponentBoundEvent_Mode, bool CallFunc_BooleanAND_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_2, class AController* CallFunc_GetController_ReturnValue_1, ESlateVisibility K2Node_Select_Default_2, class ABoscoController* K2Node_DynamicCast_AsBosco_Controller_1, bool K2Node_DynamicCast_bSuccess_2, class AActor* K2Node_CustomEvent_followTarget, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_3, class UTexture2D* K2Node_Select_Default_3, class UTexture2D* K2Node_Select_Default_4);
};

#endif
