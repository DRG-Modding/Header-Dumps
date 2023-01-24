#ifndef UE4SS_SDK_ActorLayerUtilities_HPP
#define UE4SS_SDK_ActorLayerUtilities_HPP

struct FActorLayer
{
    FName Name;

};

class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void RemoveActorFromLayer(class AActor* InActor, const FActorLayer& Layer);
    TArray<class AActor*> GetActors(class UObject* WorldContextObject, const FActorLayer& ActorLayer);
    void AddActorToLayer(class AActor* InActor, const FActorLayer& Layer);
};

#endif
