#ifndef UE4SS_SDK_ITM_FactionLogo_HPP
#define UE4SS_SDK_ITM_FactionLogo_HPP

class UITM_FactionLogo_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Animation;
    class UImage* Image_232;
    class USizeBox* SizeBox_17;
    class UUI_ImageTinted_C* UI_ImageTinted;
    FVector2D Size;
    class UCommunityGoalFaction* Faction;
    bool animate;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_FactionLogo(int32 EntryPoint);
};

#endif
