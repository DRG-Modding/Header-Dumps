#ifndef UE4SS_SDK_WND_DiscordCommunity_HPP
#define UE4SS_SDK_WND_DiscordCommunity_HPP

class UWND_DiscordCommunity_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable_C* Basic_ButtonScalable;
    class UBasic_ButtonScalable_C* Basic_ButtonScalable_C_0;
    class UBasic_ButtonScalable_C* Basic_ButtonScalable_C_1;
    class UMENU_SpaceRigTemplate_C* MENU_TopBar;
    class UScreen_DiscordScreen_C* Screen_DiscordScreen;
    class UBasic_ButtonTab_C* ActiveTab;
    class UCommunityGoal* Goal;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Close Window();
    void OnShown();
    void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WND_DiscordCommunity(int32 EntryPoint);
};

#endif
