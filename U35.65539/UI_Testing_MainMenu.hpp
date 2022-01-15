#ifndef UE4SS_SDK_UI_Testing_MainMenu_HPP
#define UE4SS_SDK_UI_Testing_MainMenu_HPP

class UUI_Testing_MainMenu_C : UFSDMainHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimatedDRGlogo_C* AnimatedDRGlogo_C_219;
    UAnimatedStaticOverlay_C* AnimatedStaticOverlay;
    UBTN_SideBar_Big_C* BTN_Credits;
    UBTN_SideBar_Big_C* BTN_Exit;
    UBTN_SideBar_Big_C* BTN_JoinServer;
    UBTN_SideBar_Big_C* BTN_Options;
    UBTN_SideBar_Big_C* BTN_StartServer;
    UGFX_Background03_C* GFX_Background03_C_237;
    UImage* Image_19;
    UImage* Image_20;
    UImage* Image_21;
    UNewsTicker_C* NewsTicker;

    void Construct();
    void ExecuteUbergraph_UI_Testing_MainMenu(int32 EntryPoint);
}

#endif
