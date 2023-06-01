#ifndef UE4SS_SDK_DefuseBomb_SocketsAndWire_HPP
#define UE4SS_SDK_DefuseBomb_SocketsAndWire_HPP

class UDefuseBomb_SocketsAndWire_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPingSockets;
    class UWidgetAnimation* AnimPingTarget;
    class UWidgetAnimation* AnimCutWire;
    class UWidgetAnimation* AnimFadeOut;
    class UBasic_Image_C* CutTarget;
    class UDefuseBomb_Socket_C* EndSocket;
    class UDefuseBomb_Socket_C* StartSocket;
    class UDefuseBomb_Wire_C* wire;
    FVector2D Start Pos;
    FVector2D StartTangent;
    FVector2D EndPos;
    FVector2D EndTangent;
    int32 Start Index;
    int32 End Index;
    float CuttingPosition;
    float TargetPosition;
    bool IsFadeOut;
    bool IsSelectable;
    float StartCuttingTime;
    FDefuseBomb_SocketsAndWire_COnWireCut OnWireCut;
    void OnWireCut();
    bool WireCut;

    void IsWireCut(bool& WireCut);
    bool IsWireSelected();
    void PingSockets();
    void GetWireLength(float& OutDist);
    void SetCuttableTint(FLinearColor Appearance Cuttable Tint);
    void TryCutWire(bool& OutWireCut);
    void OnPaint(FPaintContext& Context);
    void SetCuttingPosition(float InPosition);
    void Reset();
    void FadeIn();
    void FadeOut();
    void SetWireOpacity(float InOpacity);
    void TrySelectSocket(int32 InIndex, bool& OutWireSelected, bool& OutSocketSelected);
    void SetCuttable(bool InCuttable);
    void Try Highlight Socket(int32 InIndex, bool& OutHighlighted);
    void SetEnd(FVector2D EndPos, FVector2D EndTangent, int32 End Index);
    void SetStartAndEnd(FVector2D InStartPos, FVector2D InEndPos, FVector2D InStartTangent, FVector2D InEndTangent, int32 InStartIndex, int32 InEndIndex);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCutWireBegin();
    void OnCutWireFinished();
    void ExecuteUbergraph_DefuseBomb_SocketsAndWire(int32 EntryPoint);
    void OnWireCut__DelegateSignature();
};

#endif
