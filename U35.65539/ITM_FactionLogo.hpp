#ifndef UE4SS_SDK_ITM_FactionLogo_HPP
#define UE4SS_SDK_ITM_FactionLogo_HPP

class UITM_FactionLogo_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Animation;
    UImage* Image_232;
    USizeBox* SizeBox_17;
    UUI_ImageTinted_C* UI_ImageTinted;
    FVector2D Size;
    UCommunityGoalFaction* Faction;
    bool animate;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_FactionLogo(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FSlateBrush K2Node_MakeStruct_SlateBrush);
}

#endif
