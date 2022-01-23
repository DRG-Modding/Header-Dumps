#ifndef UE4SS_SDK_HUD_Resources_Player_Icon_HPP
#define UE4SS_SDK_HUD_Resources_Player_Icon_HPP

class UHUD_Resources_Player_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UWidgetAnimation* Intro;
    class UWidgetAnimation* Outro;
    class UBorder* BG;
    class UInvalidationBox* Invalidation;
    class UHUD_DefaultLabel_C* Item_Name;
    class UProgressBar* ItemProgress;
    class UHUD_DefaultLabel_C* ResourceAmount;
    class UBasic_ResourceIcon_C* ResourceIcon;
    class UCappedResource* Resource;
    float Amount;
    FHUD_Resources_Player_Icon_COnResourceChanged OnResourceChanged;
    void OnResourceChanged(class UHUD_Resources_Player_Icon_C* ResourceIcon);

    void UpdateIfChanged(bool Changed);
    void SetAmount(float Amount, bool& ValueChanged, float Temp_float_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetCapacityPct_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, int32 CallFunc_Round_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 K2Node_Select_Default_1, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
    void Refresh(bool CallFunc_SetAmount_ValueChanged);
    void SetResource(class UCappedResource* InResource, bool HideIfEmpty);
    void OnChanged(class UCappedResource* Resource, float Amount);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnOutroFinished();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnIncreased(class UCappedResource* Resource, float Amount);
    void Init Resource();
    void ExecuteUbergraph_HUD_Resources_Player_Icon(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_HUD_Resources_Player_IconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, FExecuteUbergraph_HUD_Resources_Player_IconK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, FExecuteUbergraph_HUD_Resources_Player_IconK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UCappedResource* K2Node_CustomEvent_resource_1, float K2Node_CustomEvent_Amount_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsEmpty_ReturnValue_1, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MoveTowards_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_SetAmount_ValueChanged, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount);
    void OnResourceChanged__DelegateSignature(class UHUD_Resources_Player_Icon_C* ResourceIcon);
};

#endif
