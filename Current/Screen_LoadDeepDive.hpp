#ifndef UE4SS_SDK_Screen_LoadDeepDive_HPP
#define UE4SS_SDK_Screen_LoadDeepDive_HPP

class UScreen_LoadDeepDive_C : public UScreen_BaseLoadLevel_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* PlayerBox;
    class UUI_CurvedCanvas_C* UI_CurvedCanvas;

    void RemovePlayer(class APlayerState* PlayerState);
    void AddPlayer(class AFSDPlayerState* PlayerState);
    void StartLoadSeq();
    void PlayerJoined(class AFSDPlayerState* PlayerState);
    void PlayerLeft(class AFSDPlayerState* PlayerState);
    void ExecuteUbergraph_Screen_LoadDeepDive(int32 EntryPoint);
};

#endif
