#ifndef UE4SS_SDK_UI_CoreInfuser_Reward_Background_HPP
#define UE4SS_SDK_UI_CoreInfuser_Reward_Background_HPP

class UUI_CoreInfuser_Reward_Background_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class UImage* BG;
    class USizeBox* IconSizer;
    class UImage* Overlay;
    bool Angled;
    bool IsHovering;
    float Size;
    class USchematicCategory* Category;

    void SetCategory(class USchematicCategory* InSchematicCategory, class UEventRewardType* RewardType, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void SetSize(float InSize);
    void SetHovered(bool InHovering, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetAngled(bool Angled, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UTexture2D* K2Node_Select_Default, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* K2Node_Select_Default_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_CoreInfuser_Reward_Background(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
