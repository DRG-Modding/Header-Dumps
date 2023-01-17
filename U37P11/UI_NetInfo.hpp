#ifndef UE4SS_SDK_UI_NetInfo_HPP
#define UE4SS_SDK_UI_NetInfo_HPP

class UUI_NetInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* PktLossBox;
    class UTextBlock* TextBlock_FPS;
    class UTextBlock* TextBlock_Jitter;
    class UTextBlock* TextBlock_Ping;
    class UTextBlock* TextBlock_PktLoss_PlayerName;
    class UTextBlock* TextBlock_PktLossIn;
    class UTextBlock* TextBlock_PktLossOut;
    FSlateFontInfo Font;
    TEnumAsByte<ETextJustify::Type> Justification;
    int32 NetInfoLevel;

    void GetPktLossString(FText& Names, FText& PktLossIn, FText& PktLossOut, FText& Ping, FText& Jitter, bool& IsValid);
    void GetPlayerName(class AFSDPlayerController* PlayerController, FString& Name);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SlowTick();
    void OnNetInfoLevelChanged(int32 NewValue);
    void ExecuteUbergraph_UI_NetInfo(int32 EntryPoint);
};

#endif
