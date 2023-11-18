#ifndef UE4SS_SDK_UI_FrozenInputSequence_HPP
#define UE4SS_SDK_UI_FrozenInputSequence_HPP

class UUI_FrozenInputSequence_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_41;
    TArray<class UUI_FrozenInputDirectionIcon_C*> DirectionalArrows;
    int32 Array Index;
    int32 UsedIndex;
    TArray<EThawInputDirection> Sequence;

    void SetupSequence(const TArray<EThawInputDirection>& Sequence, bool First);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnInputSuccess();
    void OnInputFailed();
    void ExecuteUbergraph_UI_FrozenInputSequence(int32 EntryPoint);
};

#endif
