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

package net.labymedia.ultralight.plugin.logging;

/**
 * Log levels, used with {@link UltralightLogger#logMessage(UltralightLogLevel, String)}
 */
public enum UltralightLogLevel {
    /**
     * An error occurred and a message has been generated.
     */
    ERROR,

    /**
     * Some warning has been triggered and a message has been generated.
     */
    WARNING,

    /**
     * An event occurred and a message has been generated
     */
    INFO
}
