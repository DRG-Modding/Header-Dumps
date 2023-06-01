#ifndef UE4SS_SDK_OnScreenIndicator_UsableItem_WithDescription_HPP
#define UE4SS_SDK_OnScreenIndicator_UsableItem_WithDescription_HPP

class UOnScreenIndicator_UsableItem_WithDescription_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* fade;
    class UVerticalBox* holder;
    class UUI_AdvancedLabel_C* KeyLabel;
    class UProgressBar* Use_Progress;
    class UTextBlock* UseText;
    class UCharacterUseComponent* UseComponent;
    bool Initialized;
    float DepositingStartCapacity;

    class UUsableComponentBase* GetUsable();
    void SetTitle(FText InText);
    void SetAction(FText NewText, FText OverrideControllerText);
    void OnDepositingBegin(class UResourceBank* ResourceBank);
    void PreConstruct(bool IsDesignTime);
    void EndHover();
    void BeginHover(class UUsableComponentBase* Component);
    void Construct();
    void On Initialize();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription(int32 EntryPoint);
};

#endif
