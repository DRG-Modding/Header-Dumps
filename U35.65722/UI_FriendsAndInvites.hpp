#ifndef UE4SS_SDK_UI_FriendsAndInvites_HPP
#define UE4SS_SDK_UI_FriendsAndInvites_HPP

class UUI_FriendsAndInvites_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    class UBlurBackground_C* BlurBackground;
    class UBorder* Border;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UBasic_Label_C* Friends;
    class UUI_FriendList_C* UI_FriendList;

    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_FriendsAndInvites(int32 EntryPoint);
};

#endif
