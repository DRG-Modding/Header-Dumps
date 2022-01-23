#ifndef UE4SS_SDK_UI_RewardSchematic_HPP
#define UE4SS_SDK_UI_RewardSchematic_HPP

class UUI_RewardSchematic_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrationAnim;
    class UUI_Forge_Schematic_C* UI_Forge_Schematic;
    class UTextBlock* UnlockedText;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PlayReceiveAnim();
    void ExecuteUbergraph_UI_RewardSchematic(int32 EntryPoint, FText CallFunc_MakeLiteralText_ReturnValue, ESchematicType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class USchematicReward* K2Node_DynamicCast_AsSchematic_Reward, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, const FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue);
};

#endif
