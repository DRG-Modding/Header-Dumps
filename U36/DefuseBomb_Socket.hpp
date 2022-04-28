#ifndef UE4SS_SDK_DefuseBomb_Socket_HPP
#define UE4SS_SDK_DefuseBomb_Socket_HPP

class UDefuseBomb_Socket_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIndicate;
    class UBasic_Image_C* Socket_Image;
    class UBasic_Image_C* Socket_Indicator;
    int32 SocketIndex;
    bool Highlighted;
    bool WireCut;
    bool Selected;

    void SetWireCut(bool InWireCut);
    void SetIndicate(bool InVisibleIndicator);
    void Reset();
    void TrySelectSocket(int32 InIndex);
    void SetSocketIndex(int32 SocketIndex);
    void Update();
    void SetHighlighted(bool InHighlighted);
    void SetTangent(FVector2D InTangent);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_DefuseBomb_Socket(int32 EntryPoint);
};

#endif
