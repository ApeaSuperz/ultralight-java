/*
 * Ultralight Java - Java wrapper for the Ultralight web engine
 * Copyright (C) 2020 LabyMedia and contributors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include <jni.h>

namespace ultralight_java {
    /**
     * Class for interfacing with ultralight::Renderer from java.
     */
    class UltralightRendererJNI {
    public:
        /**
         * Creates a new ultralight::Renderer object and wraps it into a java object.
         *
         * @param env The JNI environment to use for accessing java
         * @param caller_class The java class calling the method, should always be UltralightRenderer
         * @return The java renderer object
         */
        static jobject create(JNIEnv *env, jclass caller_class);

        /**
         * Creates a new ultralight::View object and wraps it into a java object.
         *
         * @param env The JNI environment to use for accessing java
         * @param instance The java object of the ultralight::Renderer creating this view
         * @param width The width of the view in pixels
         * @param height The height of the view in pixels
         * @param transparent Whether the view should be transparent
         * @param force_cpu_renderer Whether this view should always be rendered using the CPU
         * @return The java object wrapping the created view
         */
        static jobject create_view(
            JNIEnv *env,
            jobject instance,
            jlong width,
            jlong height,
            jboolean transparent,
            jboolean force_cpu_renderer);

        /**
         * Calls the ultralight::Renderer::Update method.
         *
         * @param env The JNI environment to use for accessing java
         * @param instance The java object of the ultralight::Renderer instance
         */
        static void update(JNIEnv *env, jobject instance);

        /**
         * Calls the ultralight::Renderer::Render method.
         *
         * @param env The JNI environment to use for accessing java
         * @param instance The java object of the ultralight::Renderer instance
         */
        static void render(JNIEnv *env, jobject instance);

        /**
         * Calls the ultralight::Renderer::PurgeMemory method.
         *
         * @param env The JNI environment to use for accessing java
         * @param instance The java object of the ultralight::Renderer instance
         */
        static void purgeMemory(JNIEnv *env, jobject instance);

        /**
         * Calls the ultralight::Renderer::LogMemoryUsage method.
         *
         * @param env The JNI environment to use for accessing java
         * @param instance The java object of the ultralight::Renderer instance
         */
        static void logMemoryUsage(JNIEnv *env, jobject instance);
    };
} // namespace ultralight_java