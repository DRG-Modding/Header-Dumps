#ifndef UE4SS_SDK_Screen_LoadLevel_HPP
#define UE4SS_SDK_Screen_LoadLevel_HPP

class UScreen_LoadLevel_C : public UScreen_BaseLoadLevel_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_C* AnimatedStaticOverlay_76;
    class UBorder* Border_0;
    class UBorder* Border_3;
    class UHUD_Chat_C* HUD_Chat_1;
    class UHorizontalBox* PlayerBox;
    class URetainerBox* RetainerBox_0;
    class URetainerBox* RetainerBox_2;
    class UTextBlock* TextBlock_Complexity;
    class UTextBlock* TextBlock_Duration;
    class UTextBlock* TextBlock_Glocal_Seed;
    class UTextBlock* TextBlock_Mission_Seed;
    class UTextBlock* TextBlock_PLS_Seed;
    class UHorizontalBox* TopHorizontalBox;
    class UUI_LoadingTips_C* UI_LoadingTips;
    class UWND_MissionBar_C* WND_MissionBar;
    bool HeroIseSet;
    bool ClassSelectionIsHidden;
    bool PlayerReadyBoxAlreadyShown;

    void SetSeed(class UTextBlock* Widget, int32 Value);
    void AllPlayersHaveDifferentClass(bool& AllClassesUniuqe);
    void RemovePlayer(class AFSDPlayerState* PlayerState);
    void AreAllPlayersReady(bool& Result);
    void AddPlayer(class AFSDPlayerState* PlayerState);
    void Destruct();
    void PlayerLeft(class AFSDPlayerState* PlayerState);
    void PlayerJoined(class AFSDPlayerState* PlayerState);
    void Construct();
    void StartLoadSeq();
    void ExecuteUbergraph_Screen_LoadLevel(int32 EntryPoint);
};

#endif
