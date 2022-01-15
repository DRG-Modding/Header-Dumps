#ifndef UE4SS_SDK_ITM_CampaignItem_HPP
#define UE4SS_SDK_ITM_CampaignItem_HPP

class UITM_CampaignItem_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ANIM_PingIcon;
    UWidgetAnimation* ANIM_ActiveMission;
    UImage* BackgroundGlow;
    UImage* ConnectorLine;
    UImage* InnerBorder;
    UImage* InnerFiller;
    UImage* MissionIcon;
    UImage* OuterBorder;
    UImage* OuterFiller;
    UOverlay* Overlay_Outer;
    UImage* PingGlow;
    USizeBox* SizeBox_1;
    UMissionTemplate* mission;
    bool FirstMission;
    bool Complete;
    bool Active;
    FVector2D CompletedScale;
    FVector2D ActiveScale;

    void Ping(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPingStarted();
    void OnPingFinished();
    void SetScale(FVector2D CompletedScale, FVector2D ActiveScale);
    void ExecuteUbergraph_ITM_CampaignItem(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_4, FVector2D Temp_struct_Variable, bool Temp_bool_Variable_5, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FLinearColor K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FVector2D K2Node_Select_Default_4, FVector2D K2Node_CustomEvent_CompletedScale, FVector2D K2Node_CustomEvent_ActiveScale, FVector2D K2Node_Select_Default_5, bool Temp_bool_Variable_6, ESlateVisibility K2Node_Select_Default_6);
}

#endif
