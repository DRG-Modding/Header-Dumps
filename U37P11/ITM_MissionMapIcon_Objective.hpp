#ifndef UE4SS_SDK_ITM_MissionMapIcon_Objective_HPP
#define UE4SS_SDK_ITM_MissionMapIcon_Objective_HPP

class UITM_MissionMapIcon_Objective_C : public UUserWidget
{
    class UTextBlock* DATA_ObjectiveResource;
    class UImage* ICON_ObjectiveResource;
    class UHorizontalBox* ObjectiveMarker;

    void SetData(class UTexture2D* Texture, FText InText);
};

#endif
