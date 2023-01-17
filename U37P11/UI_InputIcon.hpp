#ifndef UE4SS_SDK_UI_InputIcon_HPP
#define UE4SS_SDK_UI_InputIcon_HPP

class UUI_InputIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UOverlay* RootOverlay;
    bool Is Design Time;
    FStruct_InputIcon Settings;

    void GetBrushTint(bool IsTintable, FLinearColor& OutputColor);
    void GetIconSize(class UTexture2D* InTexture, FVector2D& OutSize);
    void Refresh();
    void SetSettings(FStruct_InputIcon InSettings);
    FName GetCurrentMenuAction(EFSDInputSource& OutSource);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void ExecuteUbergraph_UI_InputIcon(int32 EntryPoint);
};

#endif
