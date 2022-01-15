#ifndef UE4SS_SDK_UI_CoreInfuser_Reward_Background_HPP
#define UE4SS_SDK_UI_CoreInfuser_Reward_Background_HPP

class UUI_CoreInfuser_Reward_Background_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimHover;
    UImage* BG;
    USizeBox* IconSizer;
    UImage* Overlay;
    bool Angled;
    bool IsHovering;
    float Size;
    USchematicCategory* Category;

    void SetCategory(USchematicCategory* InSchematicCategory, UEventRewardType* RewardType, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void SetSize(float InSize);
    void SetHovered(bool InHovering, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, uint8 K2Node_Select_Default, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetAngled(bool Angled, bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, UTexture2D* K2Node_Select_Default, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* K2Node_Select_Default_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_CoreInfuser_Reward_Background(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
