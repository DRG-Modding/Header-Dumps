#ifndef UE4SS_SDK_WND_DiscordCommunity_HPP
#define UE4SS_SDK_WND_DiscordCommunity_HPP

class UWND_DiscordCommunity_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonScalable_C* Basic_ButtonScalable;
    UBasic_ButtonScalable_C* Basic_ButtonScalable_C_0;
    UBasic_ButtonScalable_C* Basic_ButtonScalable_C_1;
    UMENU_SpaceRigTemplate_C* MENU_TopBar;
    UScreen_DiscordScreen_C* Screen_DiscordScreen;
    UBasic_ButtonTab_C* ActiveTab;
    UCommunityGoal* Goal;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void Close Window();
    void OnShown();
    void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WND_DiscordCommunity(int32 EntryPoint, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue);
}

#endif
