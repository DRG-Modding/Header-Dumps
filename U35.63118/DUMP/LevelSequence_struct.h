// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x02 (Inherited: 0x00)
struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x00(0x01)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x01(0x01)
};

// ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x01 (Inherited: 0x00)
struct FBoundActorProxy {
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0xa0 (Inherited: 0x00)
struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x00(0x50)
	TSet<FGuid> AnimSequenceInstances; // 0x50(0x50)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10 (Inherited: 0x00)
struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x00(0x10)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x38 (Inherited: 0x00)
struct FLevelSequenceBindingReference {
	FString PackageName; // 0x00(0x10)
	FSoftObjectPath ExternalObjectPath; // 0x10(0x18)
	FString ObjectPath; // 0x28(0x10)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50 (Inherited: 0x00)
struct FLevelSequenceObjectReferenceMap {
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20 (Inherited: 0x00)
struct FLevelSequenceLegacyObjectReference {
};

// ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38 (Inherited: 0x00)
struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x00(0x1c)
	FString ComponentName; // 0x20(0x10)
	TWeakObjectPtr<UObject> CachedComponent; // 0x30(0x08)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xb8 (Inherited: 0x00)
struct FLevelSequencePlayerSnapshot {
	FString MasterName; // 0x00(0x10)
	FQualifiedFrameTime MasterTime; // 0x10(0x10)
	FQualifiedFrameTime SourceTime; // 0x20(0x10)
	FString CurrentShotName; // 0x30(0x10)
	FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	FString SourceTimecode; // 0x60(0x10)
	TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70(0x28)
	FLevelSequenceSnapshotSettings Settings; // 0x98(0x0c)
	ULevelSequence* ActiveShot; // 0xa8(0x08)
	FMovieSceneSequenceID ShotID; // 0xb0(0x04)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0x0c (Inherited: 0x00)
struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x00(0x01)
	FFrameRate FrameRate; // 0x04(0x08)
};

