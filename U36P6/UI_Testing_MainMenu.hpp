#ifndef UE4SS_SDK_UI_Testing_MainMenu_HPP
#define UE4SS_SDK_UI_Testing_MainMenu_HPP

class UUI_Testing_MainMenu_C : public UFSDMainHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedDRGlogo_C* AnimatedDRGlogo_C_219;
    class UAnimatedStaticOverlay_C* AnimatedStaticOverlay;
    class UBTN_SideBar_Big_C* BTN_Credits;
    class UBTN_SideBar_Big_C* BTN_Exit;
    class UBTN_SideBar_Big_C* BTN_JoinServer;
    class UBTN_SideBar_Big_C* BTN_Options;
    class UBTN_SideBar_Big_C* BTN_StartServer;
    class UGFX_Background03_C* GFX_Background03_C_237;
    class UImage* Image_19;
    class UImage* Image_20;
    class UImage* Image_21;
    class UNewsTicker_C* NewsTicker;

    void Construct();
    void ExecuteUbergraph_UI_Testing_MainMenu(int32 EntryPoint);
};

#endif
