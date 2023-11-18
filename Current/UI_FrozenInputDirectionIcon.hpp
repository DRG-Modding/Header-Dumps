#ifndef UE4SS_SDK_UI_FrozenInputDirectionIcon_HPP
#define UE4SS_SDK_UI_FrozenInputDirectionIcon_HPP

class UUI_FrozenInputDirectionIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* failed;
    class UWidgetAnimation* Pressed;
    class UWidgetAnimation* Active;
    class UImage* Image_92;
    TArray<class UTexture2D*> Textures;
    FWidgetTransform EForward;
    FWidgetTransform ERight;
    FWidgetTransform EBack;
    FWidgetTransform ELeft;

    void Finished_CD1267A8441EB6B05873859D8163D918();
    void SetDirection(EThawInputDirection Direction);
    void SetActive(bool Active);
    void OnPressed();
    void OnFailed();
    void ExecuteUbergraph_UI_FrozenInputDirectionIcon(int32 EntryPoint);
};

#endif
